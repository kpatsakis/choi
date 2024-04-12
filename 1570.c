void fun()
{
  int entity_8 = 96;
  int entity_0 = 58;
  char entity_5[70] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_5, 'C', 70-1);
  entity_5[70-1]='';
  entity_8 = 90;
  strcpy(entity_3, entity_5);
}