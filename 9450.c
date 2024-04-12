void fun()
{
  int entity_8 = 13;
  entity_8 = 100;
  char entity_9[34] = "";
  entity_9 = NULL;
  char* entity_0;
  char* entity_7;
  char* entity_5;
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  memset(entity_9, 'F', 34-1);
  entity_9[34-1]='';
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[7-1]='';
  entity_9[entity_8] = 'Z';
}