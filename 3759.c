void fun()
{
  char entity_3[29] = "";
  entity_3 = NULL;
  char entity_4[100] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'h', 100-1);
  entity_4[100-1]='';
  entity_2 = (char*)malloc(98*sizeof(char));
  entity_2[98-1]='';
  memset(entity_3, 'Y', 29-1);
  entity_3[29-1]='';
  memcpy(entity_2, entity_4, 100*sizeof(char));
}