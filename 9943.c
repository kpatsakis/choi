void fun()
{
  char entity_1[74] = "";
  entity_1 = NULL;
  char* entity_0;
  char* entity_2;
  char entity_7[97] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[10-1]='';
  memset(entity_1, 'a', 74-1);
  entity_1[74-1]='';
  memset(entity_7, 'V', 97-1);
  entity_7[97-1]='';
  entity_2 = (char*)malloc(41*sizeof(char));
  entity_2[41-1]='';
  memcpy(entity_0, entity_7, 97*sizeof(char));
}