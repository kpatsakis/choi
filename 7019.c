void fun()
{
  int entity_6 = 17;
  int entity_8 = 86;
  char* entity_9;
  char* entity_7;
  char entity_3[2] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', 2-1);
  entity_3[2-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[37-1]='';
  memcpy(entity_7, entity_3, 2*sizeof(char));
}