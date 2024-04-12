void fun()
{
  int entity_9 = 89;
  char entity_3[35] = "";
  char* entity_5;
  char* entity_2;
  char entity_6[36] = "";
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'e', 36-1);
  entity_6[36-1]='0';
  memset(entity_3, 'P', 35-1);
  entity_3[35-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_6, 36*sizeof(char));
}