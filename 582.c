void fun()
{
  int entity_2 = 79;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  memset(entity_7, 'y', entity_2-1);
  entity_7[entity_2-1]='';
  entity_7[61] = 'O';
}