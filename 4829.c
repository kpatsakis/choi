void fun()
{
  int entity_9 = 43;
  int entity_6 = 74;
  entity_6 = 70;
  char entity_3[37] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_4[62] = "";
  entity_4 = NULL;
  memset(entity_3, 'F', 37-1);
  entity_3[37-1]='';
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  memset(entity_4, 'T', 62-1);
  entity_4[62-1]='';
  entity_4[entity_6] = 'h';
}