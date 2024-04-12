void fun()
{
  int entity_3 = 57;
  entity_3 = 76;
  char* entity_7;
  char entity_6[52] = "";
  entity_6 = NULL;
  char entity_2 = 'Y';
  memset(entity_6, 'K', 52-1);
  entity_6[52-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memcpy(entity_7, entity_6, 52*sizeof(char));
}