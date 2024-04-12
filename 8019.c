void fun()
{
  int entity_3 = 26;
  char entity_5 = 'g';
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memset(entity_7, 'Y', 96-1);
  entity_7[96-1]='';
  memcpy(entity_6, entity_7, 96*sizeof(char));
}