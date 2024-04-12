void fun()
{
  int entity_1 = 20;
  entity_1 = 94;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_9 = 'Q';
  char entity_4 = 'n';
  entity_3 = (char*)malloc(13*sizeof(char));
  entity_3[13-1]='';
  memset(entity_2, 'Z', entity_1-1);
  entity_2[entity_1-1]='';
  memcpy(entity_3, entity_2, entity_1*sizeof(char));
}