void fun()
{
  int entity_4 = 57;
  int entity_9 = 60;
  entity_9 = 25;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_7;
  char* entity_0;
  memset(entity_1, 'g', entity_9-1);
  entity_1[entity_9-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[24-1]='';
  memcpy(entity_7, entity_1, entity_9*sizeof(char));
}