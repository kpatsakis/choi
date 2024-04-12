void fun()
{
  int entity_4 = 88;
  char* entity_7;
  char entity_3[30] = "";
  entity_3 = NULL;
  memset(entity_3, 'D', 30-1);
  entity_3[30-1]='';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[70-1]='';
  entity_4 = 31;
  entity_3[entity_4] = 'S';
}