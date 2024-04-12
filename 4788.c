void fun()
{
  char entity_5[11] = "";
  entity_5 = NULL;
  char entity_7[28] = "";
  entity_7 = NULL;
  char entity_3[94] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 's', 94-1);
  entity_3[94-1]='';
  memset(entity_5, 'b', 11-1);
  entity_5[11-1]='';
  entity_2 = (char*)malloc(56*sizeof(char));
  entity_2[56-1]='';
  memset(entity_7, 'Q', 28-1);
  entity_7[28-1]='';
  memcpy(entity_2, entity_5, 11*sizeof(char));
}