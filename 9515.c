void fun()
{
  char entity_3 = 'O';
  char entity_2[53] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_6[41] = "";
  entity_6 = NULL;
  memset(entity_6, 'B', 41-1);
  entity_6[41-1]='';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  memset(entity_2, 'J', 53-1);
  entity_2[53-1]='';
  memcpy(entity_9, entity_6, 41*sizeof(char));
}