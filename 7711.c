void fun()
{
  char* entity_1;
  char entity_4[40] = "";
  entity_4 = NULL;
  char entity_9 = 'g';
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[5-1]='';
  memset(entity_4, 'Y', 40-1);
  entity_4[40-1]='';
  memcpy(entity_1, entity_4, 40*sizeof(char));
}