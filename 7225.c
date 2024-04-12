void fun()
{
  int entity_2 = 62;
  char entity_4[20] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'd', 20-1);
  entity_4[20-1]='';
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[87-1]='';
  entity_2 = 7;
  entity_4[entity_2] = 'V';
}