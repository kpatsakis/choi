void fun()
{
  char* entity_3;
  char entity_4 = 'm';
  char entity_2[28] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  memset(entity_2, 'H', 28-1);
  entity_2[28-1]='';
  memcpy(entity_3, entity_2, 28*sizeof(char));
}