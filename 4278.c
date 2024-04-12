void fun()
{
  int entity_2 = 8;
  char entity_6 = 'S';
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_7 = 'e';
  entity_3 = (char*)malloc(23*sizeof(char));
  entity_3[23-1]='';
  memset(entity_8, 'p', entity_2-1);
  entity_8[entity_2-1]='';
  entity_2 = 15;
  strcpy(entity_3, entity_8);
}