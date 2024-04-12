void fun()
{
  int entity_9 = 46;
  int entity_1 = 16;
  char* entity_0;
  char* entity_5;
  char entity_2[92] = "";
  char* entity_8;
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[0]='0';
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[0]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'E', 92-1);
  entity_2[92-1]='0';
  memcpy(entity_0, entity_2, 92*sizeof(char));
}