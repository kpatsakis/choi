void fun()
{
  char* entity_1;
  char entity_2 = 'g';
  char entity_3[40] = "";
  entity_3 = NULL;
  memset(entity_3, 'Y', 40-1);
  entity_3[40-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  memcpy(entity_1, entity_3, 40*sizeof(char));
}