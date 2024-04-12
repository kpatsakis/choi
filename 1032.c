void fun()
{
  int entity_8 = 10;
  int entity_1 = 6;
  char* entity_3;
  char entity_9[90] = "";
  entity_9 = NULL;
  char entity_6 = 'W';
  memset(entity_9, 'A', 90-1);
  entity_9[90-1]='';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  entity_9[entity_8] = 'k';
}