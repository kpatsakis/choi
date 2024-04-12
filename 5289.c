void fun()
{
  int entity_2 = 15;
  char entity_6[57] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(68*sizeof(char));
  entity_5[68-1]='';
  memset(entity_6, 'J', 57-1);
  entity_6[57-1]='';
  memcpy(entity_5, entity_6, 57*sizeof(char));
}