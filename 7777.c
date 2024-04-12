void fun()
{
  int entity_2 = 32;
  int entity_1 = 86;
  char* entity_5;
  char entity_4[95] = "";
  entity_4 = NULL;
  char entity_8 = 'k';
  memset(entity_4, 'o', 95-1);
  entity_4[95-1]='';
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[62-1]='';
  entity_1 = 31;
  entity_4[entity_1] = 'E';
}