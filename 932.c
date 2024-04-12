void fun()
{
  char entity_2[53] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'B', 53-1);
  entity_2[53-1]='';
  entity_5 = (char*)malloc(34*sizeof(char));
  entity_5[34-1]='';
  memcpy(entity_5, entity_2, 53*sizeof(char));
}