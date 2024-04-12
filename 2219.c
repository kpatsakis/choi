void fun()
{
  int entity_0 = 91;
  entity_0 = 68;
  char entity_4[56] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_1[18] = "";
  entity_1 = NULL;
  memset(entity_1, 'A', 18-1);
  entity_1[18-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_4, 's', 56-1);
  entity_4[56-1]='';
  memcpy(entity_7, entity_4, 56*sizeof(char));
}