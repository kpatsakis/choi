void fun()
{
  int entity_2 = 55;
  int entity_9 = 99;
  entity_2 = 10;
  char* entity_1;
  char* entity_5;
  char entity_8[61] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', 61-1);
  entity_8[61-1]='';
  entity_1 = (char*)malloc(58*sizeof(char));
  entity_1[58-1]='';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  entity_8[entity_2] = 'i';
}