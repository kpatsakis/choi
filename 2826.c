void fun()
{
  int entity_0 = 71;
  char entity_2[90] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'P', 90-1);
  entity_2[90-1]='';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  entity_2[entity_0] = 'o';
}