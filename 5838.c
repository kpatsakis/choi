void fun()
{
  int entity_9 = 10;
  char* entity_2;
  char entity_7[8] = "";
  entity_7 = NULL;
  char entity_8 = 'w';
  char* entity_0;
  char* entity_3;
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  memset(entity_7, 'X', 8-1);
  entity_7[8-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  strcpy(entity_3, entity_7);
}