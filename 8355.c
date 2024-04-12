void fun()
{
  int entity_6 = 19;
  char entity_0[50] = "";
  entity_0 = NULL;
  char* entity_2;
  char entity_7[10] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'i', 10-1);
  entity_7[10-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_0, 'I', 50-1);
  entity_0[50-1]='';
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[54-1]='';
  memcpy(entity_2, entity_7, 10*sizeof(char));
}