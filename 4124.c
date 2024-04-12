void fun()
{
  int entity_9 = 89;
  char* entity_8;
  char entity_5[26] = "";
  entity_5 = NULL;
  char entity_6[88] = "";
  entity_6 = NULL;
  char entity_0[92] = "";
  entity_0 = NULL;
  memset(entity_6, 'M', 88-1);
  entity_6[88-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_0, 'c', 92-1);
  entity_0[92-1]='';
  memset(entity_5, 'L', 26-1);
  entity_5[26-1]='';
  memcpy(entity_8, entity_0, 92*sizeof(char));
}