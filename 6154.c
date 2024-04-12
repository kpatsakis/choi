void fun()
{
  char entity_9[86] = "";
  entity_9 = NULL;
  char entity_5 = 'g';
  char entity_7[50] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_6 = 'n';
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[25-1]='';
  memset(entity_7, 'u', 50-1);
  entity_7[50-1]='';
  memset(entity_9, 's', 86-1);
  entity_9[86-1]='';
  memcpy(entity_3, entity_7, 50*sizeof(char));
}