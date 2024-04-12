void fun()
{
  int entity_2 = 49;
  int entity_9 = 17;
  char* entity_8;
  char* entity_1;
  char entity_7[70] = "";
  entity_7 = NULL;
  char entity_0 = 'C';
  memset(entity_7, 'r', 70-1);
  entity_7[70-1]='';
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[30-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  strcpy(entity_8, entity_7);
}