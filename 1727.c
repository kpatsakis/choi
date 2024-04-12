void fun()
{
  int entity_9 = 31;
  entity_9 = 55;
  char entity_0 = 'K';
  char entity_7[28] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_3[30] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  memset(entity_7, 'g', 28-1);
  entity_7[28-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_3, 'K', 30-1);
  entity_3[30-1]='';
  memcpy(entity_8, entity_7, 28*sizeof(char));
}