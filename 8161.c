void fun()
{
  char entity_1[82] = "";
  entity_1 = NULL;
  char entity_3 = 'q';
  char* entity_6;
  char entity_7[32] = "";
  entity_7 = NULL;
  memset(entity_7, 'u', 32-1);
  entity_7[32-1]='';
  memset(entity_1, 'x', 82-1);
  entity_1[82-1]='';
  entity_6 = (char*)malloc(19*sizeof(char));
  entity_6[19-1]='';
  memcpy(entity_6, entity_1, 82*sizeof(char));
}