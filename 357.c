void fun()
{
  int entity_6 = 6;
  entity_6 = 20;
  char* entity_8;
  char entity_7[78] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', 78-1);
  entity_7[78-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  strcpy(entity_8, entity_7);
}