void fun()
{
  int entity_0 = 82;
  int entity_2 = 11;
  char* entity_1;
  char entity_8[26] = "";
  entity_8 = NULL;
  char entity_4[61] = "";
  entity_4 = NULL;
  char entity_7[82] = "";
  entity_7 = NULL;
  memset(entity_4, 'j', 61-1);
  entity_4[61-1]='';
  memset(entity_8, 'h', 26-1);
  entity_8[26-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_7, 'I', 82-1);
  entity_7[82-1]='';
  memcpy(entity_1, entity_8, 26*sizeof(char));
}