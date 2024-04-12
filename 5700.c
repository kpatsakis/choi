void fun()
{
  char entity_0[82] = "";
  entity_0 = NULL;
  char* entity_2;
  char entity_3[97] = "";
  entity_3 = NULL;
  memset(entity_3, 'G', 97-1);
  entity_3[97-1]='';
  memset(entity_0, 'J', 82-1);
  entity_0[82-1]='';
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[91-1]='';
  memcpy(entity_2, entity_0, 82*sizeof(char));
}