void fun()
{
  int entity_1 = 82;
  int entity_2 = 81;
  char entity_7[27] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[62-1]='';
  memset(entity_7, 'U', 27-1);
  entity_7[27-1]='';
  entity_7[entity_2] = 'c';
}