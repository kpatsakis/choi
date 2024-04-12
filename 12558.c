void fun()
{
  int entity_6 = 78;
  char entity_5[92] = "";
  char* entity_9;
  char entity_0[89] = "";
  char* entity_7;
  entity_9 = (char*)malloc(76*sizeof(char));
  entity_9[0]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'e', 92-1);
  entity_5[92-1]='0';
  memset(entity_0, 'e', 89-1);
  entity_0[89-1]='0';
  memcpy(entity_7, entity_5, 92*sizeof(char));
}