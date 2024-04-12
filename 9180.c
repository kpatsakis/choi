void fun()
{
  int entity_8 = 65;
  char* entity_5;
  char entity_4[25] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  memset(entity_4, 'R', 25-1);
  entity_4[25-1]='';
  memcpy(entity_5, entity_4, 25*sizeof(char));
}