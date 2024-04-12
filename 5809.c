void fun()
{
  char* entity_4;
  char entity_6[87] = "";
  entity_6 = NULL;
  char entity_2[90] = "";
  entity_2 = NULL;
  memset(entity_6, 'e', 87-1);
  entity_6[87-1]='';
  memset(entity_2, 'o', 90-1);
  entity_2[90-1]='';
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[45-1]='';
  memcpy(entity_4, entity_2, 90*sizeof(char));
}