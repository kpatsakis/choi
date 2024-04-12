void fun()
{
  int entity_7 = 26;
  entity_7 = 29;
  char* entity_4;
  char entity_9[92] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_9, 'G', 92-1);
  entity_9[92-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memcpy(entity_4, entity_9, 92*sizeof(char));
}