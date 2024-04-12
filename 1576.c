void fun()
{
  int entity_4 = 36;
  char entity_6[80] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_6, 't', 80-1);
  entity_6[80-1]='';
  memcpy(entity_7, entity_6, 80*sizeof(char));
}