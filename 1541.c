void fun()
{
  int entity_4 = 3;
  char* entity_7;
  char entity_6 = 'M';
  char entity_2[61] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[5-1]='';
  memset(entity_2, 'H', 61-1);
  entity_2[61-1]='';
  entity_2[entity_4] = 'r';
}