void fun()
{
  int entity_9 = 45;
  int entity_7 = 85;
  char* entity_3;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_3 = (char*)malloc(32*sizeof(char));
  entity_3[32-1]='';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  memset(entity_0, 'Z', entity_9-1);
  entity_0[entity_9-1]='';
  entity_9 = 80;
  entity_0[57] = 'M';
}