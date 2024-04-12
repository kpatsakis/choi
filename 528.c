void fun()
{
  int entity_5 = 80;
  int entity_2 = 71;
  char* entity_8;
  char entity_1[68] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[69-1]='';
  memset(entity_1, 'P', 68-1);
  entity_1[68-1]='';
  entity_1[entity_2] = 'H';
}