void fun()
{
  int entity_9 = 60;
  int entity_2 = 34;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_3;
  char* entity_1;
  char* entity_7;
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[20-1]='';
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  entity_3 = (char*)malloc(72*sizeof(char));
  entity_3[72-1]='';
  memset(entity_0, 'z', entity_2-1);
  entity_0[entity_2-1]='';
  memcpy(entity_1, entity_0, entity_2*sizeof(char));
}