void fun()
{
  int entity_8 = 66;
  char* entity_4;
  char entity_9[92] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'v', 92-1);
  entity_9[92-1]='';
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memcpy(entity_4, entity_9, 92*sizeof(char));
}