void fun()
{
  char* entity_8;
  char entity_9[53] = "";
  entity_9 = NULL;
  char entity_4 = 'u';
  char entity_3 = 'y';
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  memset(entity_9, 'd', 53-1);
  entity_9[53-1]='';
  memcpy(entity_8, entity_9, 53*sizeof(char));
}