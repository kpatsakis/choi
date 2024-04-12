void fun()
{
  int entity_1 = 67;
  int entity_6 = 94;
  char entity_3[70] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'Z', 70-1);
  entity_3[70-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_6 = 55;
  strcpy(entity_7, entity_3);
}