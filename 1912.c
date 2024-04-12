void fun()
{
  int entity_9 = 65;
  entity_9 = 25;
  char entity_8[49] = "";
  entity_8 = NULL;
  char* entity_3;
  char* entity_6;
  char entity_0 = 'J';
  char* entity_5;
  entity_5 = (char*)malloc(10*sizeof(char));
  entity_5[10-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_8, 'r', 49-1);
  entity_8[49-1]='';
  entity_3 = (char*)malloc(54*sizeof(char));
  entity_3[54-1]='';
  memcpy(entity_6, entity_8, 49*sizeof(char));
}