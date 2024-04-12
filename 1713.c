void fun()
{
  int entity_5 = 95;
  int entity_2 = 27;
  char entity_1[68] = "";
  entity_1 = NULL;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  memset(entity_1, 'e', 68-1);
  entity_1[68-1]='';
  memset(entity_3, 'B', entity_2-1);
  entity_3[entity_2-1]='';
  entity_2 = 13;
  strcpy(entity_8, entity_3);
}