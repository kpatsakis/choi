void fun()
{
  int entity_0 = 69;
  entity_0 = 46;
  char* entity_8;
  char entity_7[70] = "";
  entity_7 = NULL;
  char entity_9[72] = "";
  entity_9 = NULL;
  char entity_5 = 'y';
  memset(entity_7, 'W', 70-1);
  entity_7[70-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_9, 'o', 72-1);
  entity_9[72-1]='';
  memcpy(entity_8, entity_7, 70*sizeof(char));
}